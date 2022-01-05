# import numpy as np

# a = np.genfromtxt('node1_attempt01_current.csv', skip_header=10, usecols=0)

import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

df=pd.read_csv('node1_attempt02_current.csv', 
               sep=';',
               usecols=[0,1,2],
               header=13)
# df[df.columns[2]] = df[df.columns[2]].str.replace(r'\D', '', regex=True)
df = df.rename(columns={df.columns[0]: 'Time (ms)',
                   df.columns[1]: 'I_act (mA)',
                   df.columns[2]: 'I_ref (mA)'})
df.astype({'I_ref (mA)':'float'})

# plt.plot(df.values[:,0],df.values[:,1],df.values[:,0],df.values[:,2])
sns.relplot(
    data=df,
    x='Time (ms)', y='I_ref (mA)',
    kind='line'
    )
sns.relplot(
    data=df,
    x='Time (ms)', y='I_act (mA)',
    kind='line'
    )

