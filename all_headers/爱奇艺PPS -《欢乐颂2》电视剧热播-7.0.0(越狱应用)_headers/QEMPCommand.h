//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QEMPElement.h"

#import "IQEMPCommand-Protocol.h"

@class NSDictionary, NSNumber, NSString, QYIMNode;

@interface QEMPCommand : QEMPElement <IQEMPCommand>
{
    QYIMNode *_from;
    QYIMNode *_to;
    unsigned long long _type;
    unsigned long long _mtype;
    NSString *_content;
    NSString *_business;
    NSString *_extTypeName;
    NSString *_cmdId;
    NSNumber *_gid;
    long long _createTime;
}

+ (id)generateQECommandFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long createTime;
@property(retain, nonatomic) NSNumber *gid;
@property(copy, nonatomic) NSString *commandId;
@property(copy, nonatomic) NSString *business;
@property(copy, nonatomic) NSString *content;
@property(retain, nonatomic) QYIMNode *receiver;
@property(retain, nonatomic) QYIMNode *sender;
@property(nonatomic) unsigned long long mType;
@property(nonatomic) unsigned long long type;
@property(copy, nonatomic) NSString *extTypeName;
@property(readonly, nonatomic) NSDictionary *contentDic;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

