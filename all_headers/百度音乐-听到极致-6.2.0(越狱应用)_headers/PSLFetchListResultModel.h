//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;
@protocol PSLFetchListListinfoModel;

@interface PSLFetchListResultModel : JSONModel
{
    long long _listnum;
    long long _have_more;
    NSArray<PSLFetchListListinfoModel> *_listinfo;
}

@property(retain, nonatomic) NSArray<PSLFetchListListinfoModel> *listinfo; // @synthesize listinfo=_listinfo;
@property(nonatomic) long long have_more; // @synthesize have_more=_have_more;
@property(nonatomic) long long listnum; // @synthesize listnum=_listnum;
- (void).cxx_destruct;

@end

