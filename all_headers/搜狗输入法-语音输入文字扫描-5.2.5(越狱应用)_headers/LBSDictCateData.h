//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface LBSDictCateData : NSObject
{
    NSString *_cateId;
    NSString *_cateCount;
    NSString *_provinceId;
    NSString *_provinceName;
    NSMutableArray *_dictCateList;
    NSString *_moreText;
}

@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(readonly, nonatomic) NSMutableArray *dictCateList; // @synthesize dictCateList=_dictCateList;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *provinceId; // @synthesize provinceId=_provinceId;
@property(copy, nonatomic) NSString *cateCount; // @synthesize cateCount=_cateCount;
@property(copy, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
- (void).cxx_destruct;
- (id)init;

@end

