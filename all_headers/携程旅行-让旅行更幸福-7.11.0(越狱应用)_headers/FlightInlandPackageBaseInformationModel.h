//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightInlandPackageSwitchInformationModel, NSMutableArray, NSString;

@interface FlightInlandPackageBaseInformationModel : CTBusinessBean
{
    int packageType;
    int packageNewType;
    int packageSubType;
    _Bool isSale;
    NSString *packageID;
    NSString *packageCode;
    NSString *ruleID;
    NSString *packageName;
    int packageFlag;
    NSString *packageShortName;
    NSString *packageRemark;
    NSString *packageClauseName;
    NSString *packageClauseKey;
    NSString *packageDescriptionURL;
    FlightInlandPackageSwitchInformationModel *packageSwitchInforModel;
    NSMutableArray *noteList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(retain, nonatomic) FlightInlandPackageSwitchInformationModel *packageSwitchInforModel; // @synthesize packageSwitchInforModel;
@property(copy, nonatomic) NSString *packageDescriptionURL; // @synthesize packageDescriptionURL;
@property(copy, nonatomic) NSString *packageClauseKey; // @synthesize packageClauseKey;
@property(copy, nonatomic) NSString *packageClauseName; // @synthesize packageClauseName;
@property(copy, nonatomic) NSString *packageRemark; // @synthesize packageRemark;
@property(copy, nonatomic) NSString *packageShortName; // @synthesize packageShortName;
@property(nonatomic) int packageFlag; // @synthesize packageFlag;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName;
@property(copy, nonatomic) NSString *ruleID; // @synthesize ruleID;
@property(copy, nonatomic) NSString *packageCode; // @synthesize packageCode;
@property(copy, nonatomic) NSString *packageID; // @synthesize packageID;
@property(nonatomic) _Bool isSale; // @synthesize isSale;
@property(nonatomic) int packageSubType; // @synthesize packageSubType;
@property(nonatomic) int packageNewType; // @synthesize packageNewType;
@property(nonatomic) int packageType; // @synthesize packageType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

