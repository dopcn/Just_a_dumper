//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;

@interface MsgListModel : JSONModel
{
    NSArray *_listArry;
    long long _nextPage;
    long long _total;
    long long _msgType;
}

@property(nonatomic) long long msgType; // @synthesize msgType=_msgType;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) NSArray *listArry; // @synthesize listArry=_listArry;
- (void).cxx_destruct;

@end

