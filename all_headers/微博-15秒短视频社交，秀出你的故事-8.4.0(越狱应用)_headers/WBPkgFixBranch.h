//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString;

@interface WBPkgFixBranch : WBModelObject
{
    _Bool _runImmediatelyAfterDownload;
    _Bool _enable;
    long long _patch_version;
    NSString *_branchID;
    NSString *_wb_version;
    NSArray *_patchList;
}

+ (id)objectWithJSONDictionary:(id)arg1;
+ (_Bool)isValidForDictionary:(id)arg1;
+ (id)objectWithDictionary:(id)arg1;
@property(nonatomic, getter=isEnable) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool runImmediatelyAfterDownload; // @synthesize runImmediatelyAfterDownload=_runImmediatelyAfterDownload;
@property(retain, nonatomic) NSArray *patchList; // @synthesize patchList=_patchList;
@property(retain, nonatomic) NSString *wb_version; // @synthesize wb_version=_wb_version;
@property(retain, nonatomic) NSString *branchID; // @synthesize branchID=_branchID;
@property(nonatomic) long long patch_version; // @synthesize patch_version=_patch_version;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

