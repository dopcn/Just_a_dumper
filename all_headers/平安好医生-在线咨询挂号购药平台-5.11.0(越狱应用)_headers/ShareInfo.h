//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AdrShareDelegate;

@interface ShareInfo : NSObject
{
    _Bool _isHostHandleShare;
    NSArray *_shareItem;
    id <AdrShareDelegate> _shareDelegate;
}

@property(nonatomic) __weak id <AdrShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(copy, nonatomic) NSArray *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) _Bool isHostHandleShare; // @synthesize isHostHandleShare=_isHostHandleShare;
- (void).cxx_destruct;
- (id)init;

@end

