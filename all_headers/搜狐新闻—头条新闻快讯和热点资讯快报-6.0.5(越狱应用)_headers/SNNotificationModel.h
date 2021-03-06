//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTURLRequestDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, SNNotifyTimeLineRequest;
@protocol SNNotificationModelDelegate;

@interface SNNotificationModel : NSObject <TTURLRequestDelegate>
{
    NSDate *_refreshDate;
    _Bool _hasMore;
    NSMutableArray *_itemArray;
    SNNotifyTimeLineRequest *_notificationRequest;
    id <SNNotificationModelDelegate> _notificationDelegate;
    NSString *_nextCursor;
    NSString *_preCursor;
    long long _allNum;
}

+ (void)resetMaxMsgId;
+ (int)getMaxMsgId;
+ (id)generateMaxMsgKey;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long allNum; // @synthesize allNum=_allNum;
@property(retain, nonatomic) NSString *preCursor; // @synthesize preCursor=_preCursor;
@property(retain, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(nonatomic) __weak id <SNNotificationModelDelegate> notificationDelegate; // @synthesize notificationDelegate=_notificationDelegate;
@property(retain, nonatomic) SNNotifyTimeLineRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(readonly, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (void)requestDidFailLoadWithError:(id)arg1;
- (void)requestDidFinishLoadWithResponse:(id)arg1;
- (void)loadMore;
- (void)refresh;
- (void)reset;
- (void)saveMaxMsgId:(id)arg1;
- (id)getNotificationItem:(long long)arg1;
- (_Bool)isSupportNotification:(long long)arg1;
- (void)requestNewNotification;
- (void)parseNotiArray:(id)arg1;
- (void)parseTimelineArray:(id)arg1;
- (_Bool)isNotificationItemExist:(id)arg1;
- (id)getLastRefreshDate;
- (void)removeAllNotification;
- (void)loadAllLocalNotification;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

