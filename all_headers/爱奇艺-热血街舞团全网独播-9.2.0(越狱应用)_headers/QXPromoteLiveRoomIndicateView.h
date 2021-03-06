//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface QXPromoteLiveRoomIndicateView : UIView
{
    long long _addedUserNum;
    long long _addedFansNum;
    CDUnknownBlockType _showPromoteDetailBlock;
    UIImageView *_inPromoteImage;
    UIView *_gradientView;
    UILabel *_addedUserLabel;
    UILabel *_addedFansLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *addedFansLabel; // @synthesize addedFansLabel=_addedFansLabel;
@property(retain, nonatomic) UILabel *addedUserLabel; // @synthesize addedUserLabel=_addedUserLabel;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *inPromoteImage; // @synthesize inPromoteImage=_inPromoteImage;
@property(copy, nonatomic) CDUnknownBlockType showPromoteDetailBlock; // @synthesize showPromoteDetailBlock=_showPromoteDetailBlock;
@property(nonatomic) long long addedFansNum; // @synthesize addedFansNum=_addedFansNum;
@property(nonatomic) long long addedUserNum; // @synthesize addedUserNum=_addedUserNum;
- (void).cxx_destruct;
- (void)qxUpdateViewContent;
- (void)layoutSubviews;
- (void)selfClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

