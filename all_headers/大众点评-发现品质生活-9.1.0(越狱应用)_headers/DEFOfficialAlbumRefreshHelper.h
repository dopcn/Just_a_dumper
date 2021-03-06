//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DEFOfficialAlbumRefreshHelper : NSObject
{
    NSMutableArray *_albumPhotoInfoList;
    NSString *_photoCategoryName;
    long long _index;
    unsigned long long _cellType;
    NSString *_errorMsg;
}

@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *photoCategoryName; // @synthesize photoCategoryName=_photoCategoryName;
@property(retain, nonatomic) NSMutableArray *albumPhotoInfoList; // @synthesize albumPhotoInfoList=_albumPhotoInfoList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

