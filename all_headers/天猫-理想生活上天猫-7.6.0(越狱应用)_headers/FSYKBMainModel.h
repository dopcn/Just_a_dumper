//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class FSYKBMainInfoModel, NSString;

@interface FSYKBMainModel : TBJSONModel
{
    _Bool _success;
    FSYKBMainInfoModel *_rightsMessage;
    NSString *_ruleMsg;
    double _stayTime;
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) double stayTime; // @synthesize stayTime=_stayTime;
@property(copy, nonatomic) NSString *ruleMsg; // @synthesize ruleMsg=_ruleMsg;
@property(retain, nonatomic) FSYKBMainInfoModel *rightsMessage; // @synthesize rightsMessage=_rightsMessage;
- (void).cxx_destruct;

@end

