//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaiduWalletUICardHeaderAccessoryView, NSString, UIColor, UIFont, UIImage, UILabel;

@interface BaiduWalletUICardHeader : UIView
{
    UILabel *_titleView;
    BaiduWalletUICardHeaderAccessoryView *_accessoryView;
}

@property(readonly, nonatomic) BaiduWalletUICardHeaderAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
@property(nonatomic) _Bool showAccessoryView;
@property(nonatomic) _Bool enableAccessoryView;
@property(nonatomic) _Bool highlightAccessView;
@property(retain, nonatomic) UIImage *accessoryViewIcon;
@property(retain, nonatomic) UIColor *accessoryViewTitleColor;
@property(retain, nonatomic) UIFont *accessoryViewTitleFont;
@property(retain, nonatomic) NSString *accessoryViewTitle;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIColor *titleColor;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

