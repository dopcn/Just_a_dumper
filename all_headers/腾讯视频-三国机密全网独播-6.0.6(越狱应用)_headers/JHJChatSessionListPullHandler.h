//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JHJChatSessionListPullModel, NSString;

@interface JHJChatSessionListPullHandler : NSObject
{
    _Bool _hasNextPage;
    _Bool _isPulling;
    JHJChatSessionListPullModel *_pullModel;
    NSString *_pageContext;
}

@property _Bool isPulling; // @synthesize isPulling=_isPulling;
@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) JHJChatSessionListPullModel *pullModel; // @synthesize pullModel=_pullModel;
- (void).cxx_destruct;
- (void)doPollProcess;
- (void)startPull;
- (id)init;

@end

