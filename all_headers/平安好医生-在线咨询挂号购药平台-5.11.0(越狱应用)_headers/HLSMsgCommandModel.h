//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLSMsgModel.h"

@class HLSMsgCommandInfo;

@interface HLSMsgCommandModel : HLSMsgModel
{
    unsigned long long _cmdType;
    HLSMsgCommandInfo *_info;
}

+ (id)transformWithDictMsg:(id)arg1;
@property(retain, nonatomic) HLSMsgCommandInfo *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long cmdType; // @synthesize cmdType=_cmdType;
- (void).cxx_destruct;
- (id)buildSubTypeField;
- (id)buildTypeField;
- (id)buildContentField;

@end

