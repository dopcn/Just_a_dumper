//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString;

@interface QBGetCollectionDataRsp : JceObjectV2
{
    long long jcev2_p_0_r_eRet;
    NSString *jcev2_p_1_r_sDataMd5;
    NSArray *jcev2_p_2_r_vecCollectionfo__b0x9i_VOQBUserCollectionInfo;
    NSDictionary *jcev2_p_3_r_mapAlbumInfo__b0x9i_M09ONSStringOQBstAlbumInfo;
    NSDictionary *jcev2_p_4_r_mapTrackInfo__b0x9i_M09ONSStringOQBstTrackInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=mapTrackInfo, setter=setMapTrackInfo:) NSDictionary *jcev2_p_4_r_mapTrackInfo__b0x9i_M09ONSStringOQBstTrackInfo; // @synthesize jcev2_p_4_r_mapTrackInfo__b0x9i_M09ONSStringOQBstTrackInfo;
@property(retain, nonatomic, getter=mapAlbumInfo, setter=setMapAlbumInfo:) NSDictionary *jcev2_p_3_r_mapAlbumInfo__b0x9i_M09ONSStringOQBstAlbumInfo; // @synthesize jcev2_p_3_r_mapAlbumInfo__b0x9i_M09ONSStringOQBstAlbumInfo;
@property(retain, nonatomic, getter=vecCollectionfo, setter=setVecCollectionfo:) NSArray *jcev2_p_2_r_vecCollectionfo__b0x9i_VOQBUserCollectionInfo; // @synthesize jcev2_p_2_r_vecCollectionfo__b0x9i_VOQBUserCollectionInfo;
@property(retain, nonatomic, getter=sDataMd5, setter=setSDataMd5:) NSString *jcev2_p_1_r_sDataMd5; // @synthesize jcev2_p_1_r_sDataMd5;
@property(nonatomic, getter=eRet, setter=setERet:) long long jcev2_p_0_r_eRet; // @synthesize jcev2_p_0_r_eRet;
- (void).cxx_destruct;
- (id)init;

@end

