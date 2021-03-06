//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface DMAlertView : UIView
{
    _Bool _isHaveTitle;
    CDUnknownBlockType _alertBlock;
    NSArray *_optionArray;
    UIView *_contentView;
    double _originY;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isHaveTitle; // @synthesize isHaveTitle=_isHaveTitle;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *optionArray; // @synthesize optionArray=_optionArray;
@property(copy, nonatomic) CDUnknownBlockType alertBlock; // @synthesize alertBlock=_alertBlock;
- (void).cxx_destruct;
- (void)presentAlertView:(_Bool)arg1;
- (void)resignAlertView:(id)arg1;
- (void)clickAlertButton:(id)arg1;
- (void)initUI;
- (id)initWithTitle:(id)arg1 optionArray:(id)arg2;
- (id)init;

@end

