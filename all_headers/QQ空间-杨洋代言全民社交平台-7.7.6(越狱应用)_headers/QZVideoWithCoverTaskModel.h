//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmartVideoTaskModel.h"

@class NSMutableDictionary, PhotoTaskModel;

@interface QZVideoWithCoverTaskModel : SmartVideoTaskModel
{
    _Bool _videoExported;
    PhotoTaskModel *_coverInfoModel;
    NSMutableDictionary *_mapParams;
}

@property(nonatomic) _Bool videoExported; // @synthesize videoExported=_videoExported;
@property(retain, nonatomic) NSMutableDictionary *mapParams; // @synthesize mapParams=_mapParams;
@property(retain, nonatomic) PhotoTaskModel *coverInfoModel; // @synthesize coverInfoModel=_coverInfoModel;
- (void).cxx_destruct;
- (id)thumbPath;
- (id)titleText;
- (id)taskOptName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

