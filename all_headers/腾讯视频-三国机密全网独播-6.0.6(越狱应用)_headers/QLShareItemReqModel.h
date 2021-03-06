//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLDataRequestModel.h"

@class QLJCEShareItem;

@interface QLShareItemReqModel : QLDataRequestModel
{
    QLJCEShareItem *_shareItem;
    CDUnknownBlockType _comBlock;
}

@property(copy, nonatomic) CDUnknownBlockType comBlock; // @synthesize comBlock=_comBlock;
@property(retain, nonatomic) QLJCEShareItem *shareItem; // @synthesize shareItem=_shareItem;
- (void).cxx_destruct;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)callBlock:(_Bool)arg1;
- (void)requestNewShareItem:(int)arg1 dataKey:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)cancel;

@end

