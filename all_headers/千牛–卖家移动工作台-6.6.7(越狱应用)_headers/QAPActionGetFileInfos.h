//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QAPActionProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface QAPActionGetFileInfos : UIView <QAPActionProtocol>
{
    CDUnknownBlockType _completeHandler;
    NSMutableArray *_ret;
    NSArray *_uris;
}

@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSMutableArray *ret; // @synthesize ret=_ret;
@property(copy) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void).cxx_destruct;
- (void)asyncTask;
- (void)done;
- (void)doAction;
- (id)initWithURIs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

