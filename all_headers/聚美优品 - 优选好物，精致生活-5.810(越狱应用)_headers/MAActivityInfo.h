//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMModel.h"

@class NSMutableArray, NSString;

@interface MAActivityInfo : JMModel
{
    NSString *_title;
    NSString *_type;
    NSString *_desc;
    NSString *_colorSelect;
    NSString *_colorDisSelect;
    NSString *_ImgSelect;
    NSString *_ImgDisSelect;
    NSMutableArray *_list;
}

+ (id)defaultSeller;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *ImgDisSelect; // @synthesize ImgDisSelect=_ImgDisSelect;
@property(copy, nonatomic) NSString *ImgSelect; // @synthesize ImgSelect=_ImgSelect;
@property(copy, nonatomic) NSString *colorDisSelect; // @synthesize colorDisSelect=_colorDisSelect;
@property(copy, nonatomic) NSString *colorSelect; // @synthesize colorSelect=_colorSelect;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

