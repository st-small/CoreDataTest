//
//  SiSKeyWords+CoreDataProperties.m
//  CoreDataTest
//
//  Created by Stanly Shiyanovskiy on 19.03.17.
//  Copyright © 2017 Stanly Shiyanovskiy. All rights reserved.
//

#import "SiSKeyWords+CoreDataProperties.h"

@implementation SiSKeyWords (CoreDataProperties)

+ (NSFetchRequest<SiSKeyWords *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"SiSKeyWords"];
}

@dynamic keyWord;
@dynamic keyWordID;
@dynamic student;

@end
