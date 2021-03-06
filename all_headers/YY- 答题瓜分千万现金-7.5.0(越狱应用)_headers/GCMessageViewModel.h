//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface GCMessageViewModel : NSObject
{
    NSArray *_messages;
    NSMutableDictionary *_cellHeightDict;
}

@property(retain, nonatomic) NSMutableDictionary *cellHeightDict; // @synthesize cellHeightDict=_cellHeightDict;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (id)indexPathWithGameId:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)messageForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)fetchMessageList:(CDUnknownBlockType)arg1;
- (id)init;

@end

