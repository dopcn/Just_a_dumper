//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class JMListLoadingView;

@interface JMListLodingCRView : UICollectionReusableView
{
    JMListLoadingView *_listLoadingView;
}

+ (struct CGSize)collectionViewManager:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 referenceSizeForCellObject:(id)arg3;
+ (long long)cellCreate;
@property(retain, nonatomic) JMListLoadingView *listLoadingView; // @synthesize listLoadingView=_listLoadingView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

