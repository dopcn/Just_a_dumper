//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, SFBrandCarTypeModel, UIImageView;

@interface SFBrandCarTypeCollectionViewCell : UICollectionViewCell <CAAnimationDelegate>
{
    SFBrandCarTypeModel *_carTypeModel;
    UIImageView *_carTypeImageView;
    CDUnknownBlockType _animationCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType animationCompletion; // @synthesize animationCompletion=_animationCompletion;
@property(retain, nonatomic) UIImageView *carTypeImageView; // @synthesize carTypeImageView=_carTypeImageView;
@property(retain, nonatomic) SFBrandCarTypeModel *carTypeModel; // @synthesize carTypeModel=_carTypeModel;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopElasticityAnimation;
- (void)startElasticityAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startElasticityAnimationWithDirection:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

