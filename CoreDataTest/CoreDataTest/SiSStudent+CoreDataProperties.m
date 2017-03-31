//
//  SiSStudent+CoreDataProperties.m
//  CoreDataTest
//
//  Created by Stanly Shiyanovskiy on 19.03.17.
//  Copyright © 2017 Stanly Shiyanovskiy. All rights reserved.
//

#import "SiSStudent+CoreDataProperties.h"

@implementation SiSStudent (CoreDataProperties)

+ (NSFetchRequest<SiSStudent *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"SiSStudent"];
}

@dynamic age;
@dynamic firstName;
@dynamic lastName;
@dynamic studentKeyWord;

@end
