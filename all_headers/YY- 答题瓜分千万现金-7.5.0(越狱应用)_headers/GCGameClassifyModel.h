//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface GCGameClassifyModel : NSObject
{
    _Bool _hasLoadAllData;
    long long _dataType;
    NSMutableArray *_games;
    long long _currentPage;
}

@property(nonatomic) _Bool hasLoadAllData; // @synthesize hasLoadAllData=_hasLoadAllData;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *games; // @synthesize games=_games;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;

@end

