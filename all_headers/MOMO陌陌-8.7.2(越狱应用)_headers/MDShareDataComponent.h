//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface MDShareDataComponent : NSObject
{
    NSArray *_netDataArray;
    NSArray *_shareDataArray;
    NSArray *_funcDataArray;
}

@property(readonly, nonatomic) NSArray *funcDataArray; // @synthesize funcDataArray=_funcDataArray;
@property(readonly, nonatomic) NSArray *shareDataArray; // @synthesize shareDataArray=_shareDataArray;
@property(retain, nonatomic) NSArray *netDataArray; // @synthesize netDataArray=_netDataArray;
- (void).cxx_destruct;
- (id)shareDataModelWebWithItem:(id)arg1;
- (id)shareDataModelLocalWithType:(int)arg1;
- (id)setupShareDataArray:(id)arg1;
- (id)initWithShareData:(id)arg1 functionData:(id)arg2;

@end

