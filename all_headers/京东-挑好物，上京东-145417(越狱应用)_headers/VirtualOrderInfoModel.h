//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSMutableArray, VirtualProtocolModel;

@interface VirtualOrderInfoModel : JDModel
{
    NSMutableArray *_msgArr;
    VirtualProtocolModel *_redirectProtocol;
}

@property(retain, nonatomic) VirtualProtocolModel *redirectProtocol; // @synthesize redirectProtocol=_redirectProtocol;
@property(retain, nonatomic) NSMutableArray *msgArr; // @synthesize msgArr=_msgArr;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

