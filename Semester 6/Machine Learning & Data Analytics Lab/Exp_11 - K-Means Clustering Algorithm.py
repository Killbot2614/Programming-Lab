# Aim
# To create a python program to implement K-Means clustering algorithm

# Algorithm
# 1.Import required libraries
# 2.Load data
# 3.Extract required features
# 4.Fit Kmeans model and obtain predicted cluster labels
# 5.Visualize the clusters using matplotlib

# Program
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
df= pd.read_csv('Customers.csv')
df.head(3)
len(df)
X = df.iloc[:, [3,4]].values
X[0:5]
from sklearn.cluster import KMeans
kmeans = KMeans(n_clusters=5, init ='k-means++', max_iter=300, n_init=10, random_state=0 )
kmeans.n_clusters
y_kmeans = kmeans.fit_predict(X)
df['cluster'] = y_kmeans
print(y_kmeans.shape)
plt.scatter(X[y_kmeans==0, 0], X[y_kmeans==0, 1], s=100, c='red', label = 'Cluster 1')
plt.scatter(X[y_kmeans==1, 0], X[y_kmeans==1, 1], s=100, c='blue', label = 'Cluster 2')
plt.scatter(X[y_kmeans==2, 0], X[y_kmeans==2, 1], s=100, c='green', label ='Cluster 3')
plt.scatter(X[y_kmeans==3, 0], X[y_kmeans==3, 1], s=100, c='cyan', label = 'Cluster 4')
plt.scatter(X[y_kmeans==4, 0], X[y_kmeans==4, 1], s=100, c='magenta', label ='Cluster 5')
plt.scatter(kmeans.cluster_centers_[:, 0], kmeans.cluster_centers_[:, 1],
s=300, c='yellow', label = 'Centroids')
plt.title('Clusters of Customers')
plt.xlabel('Annual Income(k$)')
plt.ylabel('Spending Score(1-100)')
plt.show()

# Output
# array([[15,39],[15,81],[16,6]])