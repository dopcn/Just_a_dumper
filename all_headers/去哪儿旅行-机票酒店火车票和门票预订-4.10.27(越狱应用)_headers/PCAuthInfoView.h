//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JumpHandleResponsePrt-Protocol.h"

@class NSDictionary, NSString, NSURL, PCAuthInfoViewProtocolView, UIButton, UILabel;
@protocol JumpHandleResponsePrt;

@interface PCAuthInfoView : UIView <JumpHandleResponsePrt>
{
    id <JumpHandleResponsePrt> _delegate;
    NSURL *_url;
    NSDictionary *_urlData;
    id _userInfo;
    NSString *_source;
    NSString *_uuid;
    NSString *_busType;
    UIView *_backgroundView;
    UIButton *_closeBtn;
    UILabel *_title;
    UIView *_topLine;
    UIView *_bottomLine;
    UILabel *_payTypeLabel;
    UILabel *_payTypeDetailLabel;
    UIButton *_serverceDesBtn;
    UILabel *_item;
    UILabel *_itemPrice;
    UIButton *_payBtn;
    UILabel *_buttomFlashinTip;
    PCAuthInfoViewProtocolView *_payBtnTopView;
}

@property(retain, nonatomic) PCAuthInfoViewProtocolView *payBtnTopView; // @synthesize payBtnTopView=_payBtnTopView;
@property(retain, nonatomic) UILabel *buttomFlashinTip; // @synthesize buttomFlashinTip=_buttomFlashinTip;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UILabel *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(retain, nonatomic) UILabel *item; // @synthesize item=_item;
@property(retain, nonatomic) UIButton *serverceDesBtn; // @synthesize serverceDesBtn=_serverceDesBtn;
@property(retain, nonatomic) UILabel *payTypeDetailLabel; // @synthesize payTypeDetailLabel=_payTypeDetailLabel;
@property(retain, nonatomic) UILabel *payTypeLabel; // @synthesize payTypeLabel=_payTypeLabel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *busType; // @synthesize busType=_busType;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDictionary *urlData; // @synthesize urlData=_urlData;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <JumpHandleResponsePrt> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)jumpHandleResponseData:(id)arg1 withOpenURL:(id)arg2 urlData:(id)arg3 userInfo:(id)arg4;
- (void)backDataToBusiness:(id)arg1;
- (void)serviceDescription;
- (void)clickPayBtn;
- (void)close;
- (void)beginAuthInfo;
- (id)initWithUrlData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

