---
layout: default
title: Chen Jie's Blog
---
{% include JB/setup %}

<div class="text-post posts">

{% for post in site.posts %}

    <div class="posts-item">

        <h1><a class="post_title" href="{{ post.url }}">{{post.title}}</a></h1>

        <div class="caption rich-content">
            {{ post.content | split: '<!--more-->' | first }}
        </div>

        <div class="read-more"><a class="post_title" href="{{ post.url }}">
        Read More>></a></div>
	
	<br>
        <div class="arrow-time">
            <cite>{{ post.date | date_to_long_string }}</cite>
        </div>

    </div>

{% endfor %}

</div>
