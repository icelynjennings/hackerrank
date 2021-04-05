# Dwarves Server

To complete this challenge, you will need to build a simple web server that can respond to a couple of pre-defined HTTP GET requests and return filtered data from a backend service we have provided.

You then need to create a container image from your service that can be used to run it and push this image to a public container registry.

Finally, you will create the code to spin up a hosting environment for your service using either Vagrant or Terraform and a cloud provider of your choice.

## Step I: Build your Service

The service at https://thedwarves.$COMPANY.io/api/dwarves returns details on dwarves in json format.

We would like you to help us make it more user-friendly by providing a facade for it.

Write the service in a language suitable for the task (extra credit for writing it in Go).

It should respond to two types of HTTP requests:

```
Request:
GET /api/dwarves
# This should return just the names of all dwarves available from the backend as an array:

Response:
{
  "dwarves: [
    "Dwalin",
    "Balin",
    "Kili",
    "Fili"
  ]
}

---

Request:
GET /api/dwarves/Balin
# This should return the details provided by the backend for the selected Dwarf only

Response:
{
  "dwarf": {
    "name": "Balin",
    "birth": "TA 2989",
    "Death": "TA 2994",
    "culture": "Durin's Folk"
  }
}
```

## Step II: Create a Container Image

In order to make your service easy to handle and deploy, you should package it as a container image.

You may use any tooling you like to accomplish this, but show your working. If you are using Docker, that would be the Dockerfile.

Next, create a public repository for your container image on Dockerhub or Quay and push your image there.

## Step III: Create a Hosting Environment

In the final step, you will design and create a hosting environment for your service using either Vagrant or Terraform.

This environment should run at least two instances of your service container behind a load balancer and provide a single, public endpoint to access your service.

You may use any cloud provider supported by Terraform to design the environment. You may use any of the cloud provider's services as you see fit. If you do not have access to a cloud provider and would still like to use this approach, please see the FAQs

After terraform apply, your service endpoint should become available without any further manual steps.

A naked IP address for the public endpoint is acceptable. Your service should be available via HTTP (and/or HTTPS for extra credit) under /api.

## Deliverables

Once you have completed the challenge, please provide the following:

A git repository containing the code for your service. Either provide a link to a public repository on Github, Gitlab or similar or a .tgz produced with git bundle create.

A Dockerfile or similar used to create your container image. This can be either part of the code repository or separate from it.

A link to the container image in a public registry that can be used to docker pull your image.

A Terraform file that can be used to produce your hosting environment. In both cases, the code you provide should be enough to spin up the environment without further manual steps. These files may also either be part of the code repository above or separate from it.

Any documentation you feel appropriate or necessary.
