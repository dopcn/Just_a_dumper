//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTBaseEngine.h"

@class NSArray;

@interface DYRUVersionBEngine : PTBaseEngine
{
    _Bool _isSubdataExist;
    _Bool _needRefresh;
    NSArray *_extendRequestArray;
}

@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isSubdataExist; // @synthesize isSubdataExist=_isSubdataExist;
@property(retain, nonatomic) NSArray *extendRequestArray; // @synthesize extendRequestArray=_extendRequestArray;
- (void).cxx_destruct;
- (id)process:(id)arg1;
- (id)params;
- (id)url;
- (id)init;

@end

