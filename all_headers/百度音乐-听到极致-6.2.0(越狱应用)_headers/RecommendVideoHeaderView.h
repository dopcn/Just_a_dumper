//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class RecommendCommonHeaderView, RecommendVideoViewModel;

@interface RecommendVideoHeaderView : UICollectionReusableView
{
    RecommendCommonHeaderView *_headerView;
    RecommendVideoViewModel *_viewModel;
}

@property(retain, nonatomic) RecommendVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak RecommendCommonHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)_initHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

