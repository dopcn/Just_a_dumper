//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MTMYRecommendViewDelegate-Protocol.h"

@class MTMYRecommendView, NSString, UIImage;
@protocol MTMYRecommendViewCellDelegate;

@interface MTMYRecommendTableViewCell : UITableViewCell <MTMYRecommendViewDelegate>
{
    _Bool _needMask;
    _Bool _isRecommendPage;
    id <MTMYRecommendViewCellDelegate> _delegate;
    UIImage *_userImage;
    UIImage *_culledBackgroundImage;
    MTMYRecommendView *_recommendLeftView;
    MTMYRecommendView *_recommendRightView;
}

@property(nonatomic) _Bool isRecommendPage; // @synthesize isRecommendPage=_isRecommendPage;
@property(retain, nonatomic) MTMYRecommendView *recommendRightView; // @synthesize recommendRightView=_recommendRightView;
@property(retain, nonatomic) MTMYRecommendView *recommendLeftView; // @synthesize recommendLeftView=_recommendLeftView;
@property(retain, nonatomic) UIImage *culledBackgroundImage; // @synthesize culledBackgroundImage=_culledBackgroundImage;
@property(nonatomic) __weak UIImage *userImage; // @synthesize userImage=_userImage;
@property(nonatomic) _Bool needMask; // @synthesize needMask=_needMask;
@property(nonatomic) __weak id <MTMYRecommendViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recommendViewDidCilckBuyWithRecommendModel:(id)arg1;
- (void)recommendViewDidCilckBuyWithDetail:(id)arg1;
- (void)updateWithModels:(id)arg1;
- (void)updateConstraints;
- (void)updateWithDetail:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

