//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface RankLocationModel : JDModel
{
    NSString *m_provinceId;
    NSString *m_provinceName;
    NSString *m_cityId;
    NSString *m_cityName;
    NSString *m_selectItem;
}

@property(retain, nonatomic) NSString *m_selectItem; // @synthesize m_selectItem;
@property(retain, nonatomic) NSString *m_cityName; // @synthesize m_cityName;
@property(retain, nonatomic) NSString *m_cityId; // @synthesize m_cityId;
@property(retain, nonatomic) NSString *m_provinceName; // @synthesize m_provinceName;
@property(retain, nonatomic) NSString *m_provinceId; // @synthesize m_provinceId;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

