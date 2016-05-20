/*
** graph.c for graph in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Fri May 20 11:14:59 2016 Thomas Fossaert
** Last update Fri May 20 11:24:42 2016 Thomas Fossaert
*/

#include		<stdio.h>
#include		<stdlib.h>
#include		"file.h"

t_node			*newAdjListNode(int dest)
{
  t_node		*newNode;

  newNode = (struct s_node*) malloc(sizeof(struct s_node));
  newNode->dest = dest;
  newNode->next = NULL;
  return (newNode);
}

t_graph			*createGraph(int V)
{
  int			i;
  t_graph		*graph;

  i = 0;
  graph = (struct s_graph*) malloc(sizeof(struct s_graph));
  graph->V = V;
  graph->array = (struct s_list*) malloc(V * sizeof(struct s_list));
  while (++i < V)
    graph->array[i].head = NULL;
  return (graph);
}

void			addEdge(t_graph *graph, int src, int dest)
{
  t_node		*newNode;

  newNode = newAdjListNode(dest);
  newNode->next = graph->array[src].head;
  graph->array[src].head = newNode;
  newNode = newAdjListNode(src);
  newNode->next = graph->array[dest].head;
  graph->array[dest].head = newNode;
}

void			printGraph(t_graph *graph)
{
  int			v;
  t_node		*pCrawl;

  v = 0;
  while (++v < graph->V)
    {
      pCrawl = graph->array[v].head;
      printf("\n Adjacency list of vertex %d\n head ", v);
      while (pCrawl)
	{
	  printf("-> %d", pCrawl->dest);
	  pCrawl = pCrawl->next;
	}
      printf("\n");
    }
}
