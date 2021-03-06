//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OnlineLineLayoutDelegate-Protocol.h"

@class KWOnlineLayoutCell, NSIndexPath, NSString;
@protocol KWOnlineLayoutOperationDelegate;

@interface KWOnlineLayoutOperation : NSObject <OnlineLineLayoutDelegate>
{
    KWOnlineLayoutCell *_onlineLayoutCell;
    NSIndexPath *_indexPath;
    long long _collectionTag;
    long long _operationType;
    id <KWOnlineLayoutOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <KWOnlineLayoutOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(nonatomic) long long collectionTag; // @synthesize collectionTag=_collectionTag;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) KWOnlineLayoutCell *onlineLayoutCell; // @synthesize onlineLayoutCell=_onlineLayoutCell;
- (void).cxx_destruct;
- (void)finishRequestFile:(id)arg1 withLayout:(id)arg2;
- (void)finishRequestThumbnail:(id)arg1 withLayout:(id)arg2;
- (void)finishRequestPageInfo:(id)arg1;
- (void)finishRequestTypeInfo:(id)arg1;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2 collectionTag:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

