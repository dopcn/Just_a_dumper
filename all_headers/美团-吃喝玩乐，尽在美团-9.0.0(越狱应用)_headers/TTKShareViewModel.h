//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTShareActionSheetDelegate-Protocol.h"

@class NSDictionary, NSString, RACCommand, RACSubject, TTKShareInfo;

@interface TTKShareViewModel : NSObject <MTShareActionSheetDelegate>
{
    long long _pageType;
    RACSubject *_errorMessageSignal;
    CDUnknownBlockType _addParamsBlock;
    RACCommand *_didShareCommand;
    TTKShareInfo *_shareInfo;
    NSDictionary *_pageMaps;
}

@property(retain, nonatomic) NSDictionary *pageMaps; // @synthesize pageMaps=_pageMaps;
@property(retain, nonatomic) TTKShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) RACCommand *didShareCommand; // @synthesize didShareCommand=_didShareCommand;
@property(copy, nonatomic) CDUnknownBlockType addParamsBlock; // @synthesize addParamsBlock=_addParamsBlock;
@property(retain, nonatomic) RACSubject *errorMessageSignal; // @synthesize errorMessageSignal=_errorMessageSignal;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (id)shareSource;
- (id)payloadForShareMethod:(unsigned long long)arg1;
- (id)replace:(id)arg1 fromStation:(id)arg2 toStation:(id)arg3;
- (id)replaceString:(id)arg1 findWords:(id)arg2 relpaceStr:(id)arg3;
- (void)processContext:(id)arg1 shareInfo:(id)arg2;
- (void)processTitle:(id)arg1 shareInfo:(id)arg2;
- (id)processShare:(id)arg1;
- (void)loadShareData;
- (_Bool)topViewControllerIsShared;
- (void)bindData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

