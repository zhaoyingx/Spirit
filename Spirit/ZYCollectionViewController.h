//
//  ZYCollectionViewController.h
//  Spirit
//
//  Created by 赵颖 on 14-3-16.
//  Copyright (c) 2014年 Ying.Zhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZYCollectionViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
}

- (UICollectionViewFlowLayout *)createLayout;

@end