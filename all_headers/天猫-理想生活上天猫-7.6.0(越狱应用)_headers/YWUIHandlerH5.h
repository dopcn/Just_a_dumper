//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWActionHandler-Protocol.h"

@class NSString, YWIMKit;

@interface YWUIHandlerH5 : NSObject <IYWActionHandler>
{
    YWIMKit *_imkit;
}

@property(nonatomic) __weak YWIMKit *imkit; // @synthesize imkit=_imkit;
- (void).cxx_destruct;
- (_Bool)actionHandlerOnMainThread;
- (CDUnknownBlockType)actionHandlerBlockYw;
- (id)actionEvent;
- (id)initWithIMKit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

