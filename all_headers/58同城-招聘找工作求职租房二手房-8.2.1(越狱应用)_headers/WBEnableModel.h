//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFrameModel.h"

@class NSString;

@interface WBEnableModel : WBFrameModel
{
    _Bool rightEnable;
    NSString *txt;
    NSString *type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type;
@property(copy, nonatomic) NSString *txt; // @synthesize txt;
@property(nonatomic) _Bool rightEnable; // @synthesize rightEnable;
- (void).cxx_destruct;
- (void)fillCommonModelWithDict:(id)arg1;
- (id)init;
- (void)dealloc;

@end

