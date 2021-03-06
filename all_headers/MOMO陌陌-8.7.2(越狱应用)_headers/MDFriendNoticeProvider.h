//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDDBFriendNoticeProvider, MDSortedArray;

@interface MDFriendNoticeProvider : NSObject
{
    MDSortedArray *_caches;
    MDDBFriendNoticeProvider *_dbNoticeProvider;
}

@property(retain, nonatomic) MDDBFriendNoticeProvider *dbNoticeProvider; // @synthesize dbNoticeProvider=_dbNoticeProvider;
@property(retain, nonatomic) MDSortedArray *caches; // @synthesize caches=_caches;
- (void).cxx_destruct;
- (id)firstNotice;
- (void)removeAllNotices;
- (void)removeForKey:(id)arg1;
- (void)updateNotice:(id)arg1;
- (id)noticeForKey:(id)arg1;
- (void)addNotice:(id)arg1;
- (_Bool)hasMore;
- (id)loadMore;
- (id)initializationNoices;
- (id)init;

@end

