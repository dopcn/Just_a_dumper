//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class CascadeCountInfoModel, CategoryInfoModel, CuisineInfoModel, NSMutableArray;

@interface GetCascadeListResponse : CTBusinessBean
{
    int _resultCode;
    CascadeCountInfoModel *_cascadeCountInfoModel;
    NSMutableArray *_cascadeInfosList;
    CategoryInfoModel *_categoryInfoModel;
    CuisineInfoModel *_cuisineInfoModel;
}

@property(retain, nonatomic) CuisineInfoModel *cuisineInfoModel; // @synthesize cuisineInfoModel=_cuisineInfoModel;
@property(retain, nonatomic) CategoryInfoModel *categoryInfoModel; // @synthesize categoryInfoModel=_categoryInfoModel;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSMutableArray *cascadeInfosList; // @synthesize cascadeInfosList=_cascadeInfosList;
@property(retain, nonatomic) CascadeCountInfoModel *cascadeCountInfoModel; // @synthesize cascadeCountInfoModel=_cascadeCountInfoModel;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

