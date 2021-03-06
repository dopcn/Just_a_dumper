//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPBaseModel.h"

#import "WPHotUpdateDataHandlerDelegate-Protocol.h"

@class NSString, WPHotUpdateDataHandler;
@protocol WPHotUpdateModelDelegate;

@interface WPHotUpdateModel : WPBaseModel <WPHotUpdateDataHandlerDelegate>
{
    id <WPHotUpdateModelDelegate> _delegate;
    WPHotUpdateDataHandler *_hotUpdateDataHandler;
}

@property(retain, nonatomic) WPHotUpdateDataHandler *hotUpdateDataHandler; // @synthesize hotUpdateDataHandler=_hotUpdateDataHandler;
@property(nonatomic) __weak id <WPHotUpdateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didHotUpdateFail:(id)arg1 error:(id)arg2;
- (void)didHotUpdateFinished:(id)arg1 responseObject:(id)arg2;
- (void)didHotUpdateStart:(id)arg1;
- (void)checkHotUpdate:(_Bool)arg1;
- (void)cancelLoad;
- (id)initWithHost:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

