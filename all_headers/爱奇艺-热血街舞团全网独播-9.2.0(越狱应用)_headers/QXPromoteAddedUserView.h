//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface QXPromoteAddedUserView : UIView
{
    UIView *_addedUserView;
    UIView *_addedFansView;
    UILabel *_addedUserLabel;
    UILabel *_addedFansLabel;
    UILabel *_userDescLabel;
    UILabel *_fansDescLabel;
}

@property(retain, nonatomic) UILabel *fansDescLabel; // @synthesize fansDescLabel=_fansDescLabel;
@property(retain, nonatomic) UILabel *userDescLabel; // @synthesize userDescLabel=_userDescLabel;
@property(retain, nonatomic) UILabel *addedFansLabel; // @synthesize addedFansLabel=_addedFansLabel;
@property(retain, nonatomic) UILabel *addedUserLabel; // @synthesize addedUserLabel=_addedUserLabel;
@property(retain, nonatomic) UIView *addedFansView; // @synthesize addedFansView=_addedFansView;
@property(retain, nonatomic) UIView *addedUserView; // @synthesize addedUserView=_addedUserView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)qxUpdateViewContent;

@end

