//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol FilesCountDelegate;

@interface DelegateURLPair : NSObject
{
    id <FilesCountDelegate> _delegate;
    NSString *_url;
    NSArray *_blackList;
}

+ (id)delegateURLPairWithDelegate:(id)arg1 url:(id)arg2 blackList:(id)arg3;
@property(retain) NSArray *blackList; // @synthesize blackList=_blackList;
@property(retain) NSString *url; // @synthesize url=_url;
@property id <FilesCountDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

