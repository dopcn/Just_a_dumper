//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset;

@interface YHPhotoModel : NSObject
{
    _Bool _singleSelect;
    PHAsset *_photoAsset;
    long long _selectCount;
}

@property(nonatomic) _Bool singleSelect; // @synthesize singleSelect=_singleSelect;
@property(nonatomic) long long selectCount; // @synthesize selectCount=_selectCount;
@property(retain, nonatomic) PHAsset *photoAsset; // @synthesize photoAsset=_photoAsset;
- (void)dealloc;

@end

