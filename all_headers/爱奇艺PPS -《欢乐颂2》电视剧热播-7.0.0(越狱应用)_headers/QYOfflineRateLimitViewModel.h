//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QYOfflineManager;
@protocol QYOfflineRateLimitViewModelDelegate;

@interface QYOfflineRateLimitViewModel : NSObject
{
    _Bool _isDisplay;
    id <QYOfflineRateLimitViewModelDelegate> _delegate;
    unsigned long long _textType;
    QYOfflineManager *_offlineManager;
}

@property(retain, nonatomic) QYOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) unsigned long long textType; // @synthesize textType=_textType;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) __weak id <QYOfflineRateLimitViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)vipStatusChanged;
- (void)offlineEndTryAcceleration;
- (void)endTryAcceleration;
- (void)tryAcceleration;
- (void)closeRateLimitView;
- (void)commonProcess;
- (void)processDataiPhone;
- (void)processDataiPad;
- (void)processData;
- (void)registerNotification;
- (id)init;
- (void)dealloc;

@end

