//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SPassengerModel, UIImageView, UILabel;
@protocol SPassengerAvatarViewDelegate;

@interface SPassengerAvatarView : UIButton
{
    id <SPassengerAvatarViewDelegate> _delegate;
    SPassengerModel *_avatarModel;
    UIImageView *_imgView;
    UILabel *_passengerCountLabel;
}

@property(retain, nonatomic) UILabel *passengerCountLabel; // @synthesize passengerCountLabel=_passengerCountLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) SPassengerModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(nonatomic) __weak id <SPassengerAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetPassengerCount;
- (void)layoutHeaderViewsWithSize:(struct CGSize)arg1 hasBorder:(_Bool)arg2;
- (void)headerClickAction:(id)arg1;
- (void)setPassengerModel:(id)arg1;
- (void)autoLayoutSubviews;
- (id)init;

@end

