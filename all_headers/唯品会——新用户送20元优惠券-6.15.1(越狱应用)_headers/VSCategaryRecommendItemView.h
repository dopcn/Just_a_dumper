//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, VSOperationProductViewModel;

@interface VSCategaryRecommendItemView : UIView
{
    VSOperationProductViewModel *_viewModel;
    UIImageView *_bgImageView;
    UILabel *_nameLabel;
}

+ (struct CGSize)itemViewSizeWithCategoryRecommendStyle:(int)arg1;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) VSOperationProductViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)bindModel;
- (void)setupView;
- (id)initWithViewModel:(id)arg1 frame:(struct CGRect)arg2;

@end

