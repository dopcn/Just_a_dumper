//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseVCModel.h"

@class LMInterestUploadApi, NSArray;

@interface LMChooseLikeBookVCModel : LMBaseVCModel
{
    LMInterestUploadApi *_uploadApi;
    NSArray *_labelIds;
    NSArray *_dataSources;
}

@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) NSArray *labelIds; // @synthesize labelIds=_labelIds;
@property(retain, nonatomic) LMInterestUploadApi *uploadApi; // @synthesize uploadApi=_uploadApi;
- (void).cxx_destruct;
- (id)resourceAtIndexPath:(id)arg1 at:(long long)arg2;
- (void)uploadDataSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)loadDataSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithLabelIds:(id)arg1;

@end

