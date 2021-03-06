//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableItemInfo.h"

@class NSString, UIImage;

@interface CatalogItemInfo : BaseTableItemInfo
{
    NSString *_detail;
    UIImage *_image;
    int _dldImageTimes;
    long long _mfid;
    NSString *_artist;
}

+ (id)catalogItemWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 data:(long long)arg4;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(nonatomic) long long mfid; // @synthesize mfid=_mfid;
@property(nonatomic) int dldImageTimes; // @synthesize dldImageTimes=_dldImageTimes;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (id)init;
- (void)dealloc;

@end

